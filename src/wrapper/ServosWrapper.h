// ServosWrapper.h
#ifndef SERVOSWRAPPER_H
#define SERVOSWRAPPER_H

#include <node.h>
#include <node_object_wrap.h>
#include "../lib/Servos.h"

namespace demo {

class ServosWrapper : public node::ObjectWrap {
 public:
  static void Init(v8::Local<v8::Object> exports);

 private:
  explicit ServosWrapper(uint8_t header);
  ~ServosWrapper();

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void setAngle(const v8::FunctionCallbackInfo<v8::Value>& args);

  static void release(const v8::FunctionCallbackInfo<v8::Value>& args);

  static v8::Persistent<v8::Function> constructor;

  Servos *servos;
};

}  // namespace demo

#endif