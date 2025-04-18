# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_msgs:msg/AssistData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AssistData(type):
    """Metaclass of message 'AssistData'."""

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
                'rm_msgs.msg.AssistData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__assist_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__assist_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__assist_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__assist_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__assist_data

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AssistData(metaclass=Metaclass_AssistData):
    """Message class 'AssistData'."""

    __slots__ = [
        '_rel_x',
        '_rel_y',
        '_rel_z',
        '_stamp',
    ]

    _fields_and_field_types = {
        'rel_x': 'double',
        'rel_y': 'double',
        'rel_z': 'double',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rel_x = kwargs.get('rel_x', float())
        self.rel_y = kwargs.get('rel_y', float())
        self.rel_z = kwargs.get('rel_z', float())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.rel_x != other.rel_x:
            return False
        if self.rel_y != other.rel_y:
            return False
        if self.rel_z != other.rel_z:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rel_x(self):
        """Message field 'rel_x'."""
        return self._rel_x

    @rel_x.setter
    def rel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_x = value

    @builtins.property
    def rel_y(self):
        """Message field 'rel_y'."""
        return self._rel_y

    @rel_y.setter
    def rel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_y = value

    @builtins.property
    def rel_z(self):
        """Message field 'rel_z'."""
        return self._rel_z

    @rel_z.setter
    def rel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rel_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rel_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rel_z = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value
