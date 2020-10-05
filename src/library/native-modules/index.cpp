#include <napi.h>
#include <string>
#include "greeting.h"

Napi::String greetHello(const Napi::CallbackInfo& info){
    Napi::Env env = info.Env();

    std::string result = helloUser("Juan");

    return Napi::String::New(env, result);
}

Napi::String saludar(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    return Napi::String::New(env, " mundo");
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(
        Napi::String::New(env, "greetHello"),
        Napi::Function::New(env, greetHello)
    );

    exports.Set(
        Napi::String::New(env, "Hola"),
        Napi::Function::New(env, saludar)
    );

    return exports;
}

//First argument of this function and target name into binding.gyp must be the same
//Second argument must be a function that is executed when node js require this module
NODE_API_MODULE(greet, Init)