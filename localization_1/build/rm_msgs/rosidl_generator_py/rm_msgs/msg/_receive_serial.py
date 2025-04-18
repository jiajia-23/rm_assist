# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_msgs:msg/ReceiveSerial.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReceiveSerial(type):
    """Metaclass of message 'ReceiveSerial'."""

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
                'rm_msgs.msg.ReceiveSerial')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__receive_serial
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__receive_serial
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__receive_serial
            cls._TYPE_SUPPORT = module.type_support_msg__msg__receive_serial
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__receive_serial

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


class ReceiveSerial(metaclass=Metaclass_ReceiveSerial):
    """Message class 'ReceiveSerial'."""

    __slots__ = [
        '_header',
        '_yaw',
        '_pitch',
        '_v0',
        '_motor_speed',
        '_serial_time',
        '_is_rune',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'yaw': 'double',
        'pitch': 'double',
        'v0': 'double',
        'motor_speed': 'double',
        'serial_time': 'double',
        'is_rune': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.v0 = kwargs.get('v0', float())
        self.motor_speed = kwargs.get('motor_speed', float())
        self.serial_time = kwargs.get('serial_time', float())
        self.is_rune = kwargs.get('is_rune', bool())

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
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.v0 != other.v0:
            return False
        if self.motor_speed != other.motor_speed:
            return False
        if self.serial_time != other.serial_time:
            return False
        if self.is_rune != other.is_rune:
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
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def v0(self):
        """Message field 'v0'."""
        return self._v0

    @v0.setter
    def v0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v0' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v0' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v0 = value

    @builtins.property
    def motor_speed(self):
        """Message field 'motor_speed'."""
        return self._motor_speed

    @motor_speed.setter
    def motor_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'motor_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._motor_speed = value

    @builtins.property
    def serial_time(self):
        """Message field 'serial_time'."""
        return self._serial_time

    @serial_time.setter
    def serial_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'serial_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'serial_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._serial_time = value

    @builtins.property
    def is_rune(self):
        """Message field 'is_rune'."""
        return self._is_rune

    @is_rune.setter
    def is_rune(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_rune' field must be of type 'bool'"
        self._is_rune = value
