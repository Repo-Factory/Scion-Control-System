#include <vector>
#include <iostream>

using namespace std;

namespace Interface
{
    typedef vector<float> current_state_t;
    typedef vector<float> desired_state_t;
    typedef desired_state_t (*state_transform_func)(float, current_state_t&);
    typedef desired_state_t (*simple_movement_func)();

    union Function
    {
        simple_movement_func movement;
        state_transform_func transform;
    };        

    struct Command
    {
        Function function;                                                  // Points to a function to execute          (turn)
        float degree;                                                       // The magnitude to pass into that function (30 degrees)
    };

    desired_state_t stop()
    {
        cout << "Stop" << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t spin()
    {
        cout << "Turn" << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t pitch()
    {
        cout << "Pitch" << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t go()
    {
        cout << "Move" << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t turn(float degree, current_state_t& current_state)
    {
        cout << "Turn" << degree << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t move(float degree, current_state_t& current_state)
    {
        cout << "Move" << degree << endl;
        return desired_state_t{0,0,0,0,0,0};
    }

    desired_state_t count()
    {
        return desired_state_t{8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F};
    }
}