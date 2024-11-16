#include <iostream>
using namespace std;

enum class TEngineOperation
{
    full_reverse = -100,
    half_reverse = -50,
    slow_reverse = -25,
    very_slow_reverse = -5,
    stop = 0,
    very_slow_forward = 5,
    slow_forward = 20,
    half_forward = 50,
    full_forward = 100
};

enum TPlayback
{
    play,
    stop,
    pause = 16,
    rewind_tape
};

int main(int argc, char *argv[])
{
    cout << "The captain on the bridge signals with the telegraph." << endl;
    TEngineOperation telegraph = TEngineOperation::stop;
    telegraph = TEngineOperation::slow_forward;
    using TEngines = TEngineOperation;
    telegraph = TEngines::slow_forward;
    cout << "The engineer says. The captain ordered through the telegraph: ";
    switch (telegraph)
    {
    case TEngineOperation::full_reverse:
        cout << "*full reverse*" << endl;
        break;
    case TEngineOperation::half_reverse:
        cout << "*half reverse*" << endl;
        break;
    case TEngineOperation::slow_reverse:
        cout << "*slow reverse*" << endl;
        break;
    case TEngineOperation::very_slow_reverse:
        cout << "*very slow reverse*" << endl;
        break;
    case TEngineOperation::stop:
        cout << "*stop*" << endl;
        break;
    case TEngineOperation::very_slow_forward:
        cout << "*very slow ahead*" << endl;
        break;
    case TEngineOperation::slow_forward:
        cout << "*slow ahead*" << endl;
        break;
    case TEngineOperation::half_forward:
        cout << "*half ahead*" << endl;
        break;
    case TEngineOperation::full_forward:
        cout << "*full ahead*" << endl;
        break;
    default:
        cout << "*unknown command*" << endl;
        break;
    }

    return 0;
}
