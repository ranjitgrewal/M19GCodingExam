extern "C" {
  extern int multiply_in_js(float,float);
}
#include <emscripten/bind.h>

using namespace emscripten;

int multiply(float x,float y) {
    return  multiply_in_js(x,y);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("multiply", &multiply);

}
