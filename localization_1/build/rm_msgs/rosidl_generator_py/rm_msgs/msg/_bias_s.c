// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_msgs:msg/Bias.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rm_msgs/msg/detail/bias__struct.h"
#include "rm_msgs/msg/detail/bias__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_msgs__msg__bias__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[23];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rm_msgs.msg._bias.Bias", full_classname_dest, 22) == 0);
  }
  rm_msgs__msg__Bias * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // need_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "need_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->need_t = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fly_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "fly_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fly_t = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // serial_bias_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_bias_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->serial_bias_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latency_bias_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency_bias_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency_bias_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_bias_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_bias_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_bias_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_msgs__msg__bias__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Bias */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_msgs.msg._bias");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Bias");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_msgs__msg__Bias * ros_message = (rm_msgs__msg__Bias *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // need_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->need_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "need_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fly_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fly_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fly_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_bias_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->serial_bias_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_bias_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency_bias_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency_bias_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency_bias_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_bias_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_bias_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_bias_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
