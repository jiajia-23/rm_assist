# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_msgs:msg/Bias.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Bias(type):
    """Metaclass of message 'Bias'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_msgs.msg.Bias')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bias
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bias
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bias
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bias
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bias

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Bias(metaclass=Metaclass_Bias):
    """Message class 'Bias'."""

    __slots__ = [
        '_header',
        '_need_t',
        '_fly_t',
        '_serial_bias_time',
        '_latency_bias_time',
        '_motor_bias_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'need_t': 'double',
        'fly_t': 'double',
        'serial_bias_time': 'double',
        'latency_bias_time': 'double',
        'motor_bias_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.need_t = kwargs.get('need_t', float())
        self.fly_t = kwargs.get('fly_t', float())
        self.serial_bias_time = kwargs.get('serial_bias_time', float())
        self.latency_bias_time = kwargs.get('latency_bias_time', float())
        self.motor_bias_time = kwargs.get('motor_bias_time', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.need_t != other.need_t:
            return False
        if self.fly_t != other.fly_t:
            return False
        if self.serial_bias_time != other.serial_bias_time:
            return False
        if self.latency_bias_time != other.latency_bias_time:
            return False
        if self.motor_bias_time != other.motor_bias_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def need_t(self):
        """Message field 'need_t'."""
        return self._need_t

    @need_t.setter
    def need_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'need_t' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'need_t' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._need_t = value

    @builtins.property
    def fly_t(self):
        """Message field 'fly_t'."""
        return self._fly_t

    @fly_t.setter
    def fly_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fly_t' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fly_t' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fly_t = value

    @builtins.property
    def serial_bias_time(self):
        """Message field 'serial_bias_time'."""
        return self._serial_bias_time

    @serial_bias_time.setter
    def serial_bias_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'serial_bias_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'serial_bias_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._serial_bias_time = value

    @builtins.property
    def latency_bias_time(self):
        """Message field 'latency_bias_time'."""
        return self._latency_bias_time

    @latency_bias_time.setter
    def latency_bias_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latency_bias_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency_bias_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency_bias_time = value

    @builtins.property
    def motor_bias_time(self):
        """Message field 'motor_bias_time'."""
        return self._motor_bias_time

    @motor_bias_time.setter
    def motor_bias_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_bias_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'motor_bias_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._motor_bias_time = value
