// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_msgs:msg/AssistData.idl
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
#include "rm_msgs/msg/detail/assist_data__struct.h"
#include "rm_msgs/msg/detail/assist_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rm_msgs__msg__assist_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("rm_msgs.msg._assist_data.AssistData", full_classname_dest, 35) == 0);
  }
  rm_msgs__msg__AssistData * ros_message = _ros_message;
  {  // rel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_msgs__msg__assist_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AssistData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_msgs.msg._assist_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AssistData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_msgs__msg__AssistData * ros_message = (rm_msgs__msg__AssistData *)raw_ros_message;
  {  // rel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
