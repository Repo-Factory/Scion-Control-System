#include <vector>
#include <iostream>
#include <unordered_map>
#include "rclcpp/rclcpp.hpp"
#include "robot_types/msg/idea.hpp"

namespace Interface
{
    typedef std::vector<float> current_state_t;
    typedef std::vector<float> desired_state_t;
    typedef desired_state_t (*state_transform_func)(float, current_state_t&);
    typedef desired_state_t (*simple_movement_func)();
    typedef robot_types::msg::Idea idea_message_t;
    typedef std::vector<robot_types::msg::Idea> idea_vector_t;
    typedef std::vector<Command> command_vector_t;
    typedef std::unordered_map<int, std::string> ModeMap;

    enum Idea
    {
        STOP = 0,
        GO = 1,
        SPIN = 2,
        MOVE = 3,
        YAW = 4,
        // PITCH = 5,
        // ROLL = 6,
        RELATIVE_POINT = 7,
        ABSOLUTE_POINT = 8,
        PURE_RELATIVE_POINT = 9,
        PURE_ABSOLUTE_POINT = 10
    };

    union Function
    {
        simple_movement_func movement;
        state_transform_func transform;
    };      

    union Params
    {
        float degree;
        std::vector<float> list;
        void* nothing = nullptr;
    }; 

    struct Command
    {
        Function function;          // Points to a function to execute          (turn)
        float degree;               // The magnitude to pass into that function (30 degrees)
    };
}

namespace Command
{
    using namespace Interface;

    desired_state_t stop()
    {
        std::cout << "Stop" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t spin(float seconds)
    {
        std::cout << "Turn" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t pitch(float degree)
    {
        std::cout << "Pitch" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t go(float seconds)
    {
        std::cout << "Move" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t turn(float degree, current_state_t& current_state)
    {
        std::cout << "Turn" << degree << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t move(float degree, current_state_t& current_state)
    {
        std::cout << "Move" << degree << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t count()
    {
        return desired_state_t{80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F};
    }

}