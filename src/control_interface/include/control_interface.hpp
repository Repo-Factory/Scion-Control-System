#include <vector>
#include <iostream>

namespace Interface
{
    typedef std::vector<float> current_state_t;
    typedef std::vector<float> desired_state_t;
    typedef desired_state_t (*state_transform_func)(float, current_state_t&);
    typedef desired_state_t (*simple_movement_func)();

    union Function
    {
        simple_movement_func movement;
        state_transform_func transform;
    };        

    struct Command
    {
        Function function;          // Points to a function to execute          (turn)
        float degree;               // The magnitude to pass into that function (30 degrees)
    };

    desired_state_t stop()
    {
        std::cout << "Stop" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t spin()
    {
        std::cout << "Turn" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t pitch()
    {
        std::cout << "Pitch" << std::endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t go()
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