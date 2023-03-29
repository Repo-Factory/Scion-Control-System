#include <vector>
#include <unistd.h>

#include "robot_types/action/pid.hpp"
#include "robot_types/msg/idea.hpp"
#include "control_interface.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

#define MODE "Mission"

class Brain : public rclcpp::Node
{
    public:
        explicit Brain(): Node("brain_node")
        {
            this->declare_parameter("mode", MODE);
            mode_param = this->get_parameter("mode").get_parameter_value().get<std::string>();

            idea_pub_ = this->create_publisher<robot_types::msg::Idea>("brain_idea_data", 10);
            
            if (mode_param == "Explore")
            {
                decision_timer_ = this->create_wall_timer
                (
                    std::chrono::milliseconds(25), 
                    std::bind(&Brain::make_decision, this)
                );
            }
            if (mode_param == "Mission")
            {
                initSequence(idea_sequence_);
                publishSequence(idea_sequence_);
            }
        }
    private:
        rclcpp::Publisher<robot_types::msg::Idea>::SharedPtr idea_pub_;
        rclcpp::TimerBase::SharedPtr decision_timer_;
        Interface::idea_vector_t idea_sequence_;
        std::string mode_param;

        void make_decision()
        {
            std::cout << "Making A Decision" << std::endl;
        }

        void initSequence(Interface::idea_vector_t& idea_sequence)
        {
            using namespace Interface;
            robot_types::msg::Idea idea1 = robot_types::msg::Idea();
            idea1.code = Idea::RELATIVE_POINT;
            idea1.parameters = std::vector<float>{2.0F,2.0F};

            robot_types::msg::Idea idea2 = robot_types::msg::Idea();
            idea2.code = Idea::RELATIVE_POINT;
            idea2.parameters = std::vector<float>{5.0F,5.0F};

            idea_sequence.push_back(idea1);
            idea_sequence.push_back(idea2);
        }

        void publishSequence(Interface::idea_vector_t& idea_sequence)
        {   
            using namespace Interface;
            for (idea_message_t& idea_message : idea_sequence)
            {
                std::cout << idea_message.code << std::endl;
                for (float parameter : idea_message.parameters)
                {
                    std::cout << parameter << std::endl;
                } 
            }
            for (idea_message_t& idea_message : idea_sequence)
            {
                sleep(.1);
                this->idea_pub_->publish(idea_message);
            }
            RCLCPP_INFO(this->get_logger(), "Publishing Idea" );
        }

}; // class Brain


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Brain>());
  rclcpp::shutdown();
  return 0;
}



