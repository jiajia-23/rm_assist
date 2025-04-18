# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_msgs:msg/Target.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Target(type):
    """Metaclass of message 'Target'."""

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
                'rm_msgs.msg.Target')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class Target(metaclass=Metaclass_Target):
    """Message class 'Target'."""

    __slots__ = [
        '_header',
        '_tracking',
        '_id',
        '_armor_num',
        '_armor_position',
        '_car_position',
        '_armor_velocity',
        '_car_velocity',
        '_yaw',
        '_v_yaw',
        '_radius_1',
        '_radius_2',
        '_dz',
        '_c_to_a_pitch',
        '_is_repeat',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tracking': 'boolean',
        'id': 'string',
        'armor_num': 'int32',
        'armor_position': 'geometry_msgs/Pose',
        'car_position': 'geometry_msgs/Pose',
        'armor_velocity': 'geometry_msgs/Vector3',
        'car_velocity': 'geometry_msgs/Vector3',
        'yaw': 'double',
        'v_yaw': 'double',
        'radius_1': 'double',
        'radius_2': 'double',
        'dz': 'double',
        'c_to_a_pitch': 'double',
        'is_repeat': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.tracking = kwargs.get('tracking', bool())
        self.id = kwargs.get('id', str())
        self.armor_num = kwargs.get('armor_num', int())
        from geometry_msgs.msg import Pose
        self.armor_position = kwargs.get('armor_position', Pose())
        from geometry_msgs.msg import Pose
        self.car_position = kwargs.get('car_position', Pose())
        from geometry_msgs.msg import Vector3
        self.armor_velocity = kwargs.get('armor_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.car_velocity = kwargs.get('car_velocity', Vector3())
        self.yaw = kwargs.get('yaw', float())
        self.v_yaw = kwargs.get('v_yaw', float())
        self.radius_1 = kwargs.get('radius_1', float())
        self.radius_2 = kwargs.get('radius_2', float())
        self.dz = kwargs.get('dz', float())
        self.c_to_a_pitch = kwargs.get('c_to_a_pitch', float())
        self.is_repeat = kwargs.get('is_repeat', bool())

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
        if self.tracking != other.tracking:
            return False
        if self.id != other.id:
            return False
        if self.armor_num != other.armor_num:
            return False
        if self.armor_position != other.armor_position:
            return False
        if self.car_position != other.car_position:
            return False
        if self.armor_velocity != other.armor_velocity:
            return False
        if self.car_velocity != other.car_velocity:
            return False
        if self.yaw != other.yaw:
            return False
        if self.v_yaw != other.v_yaw:
            return False
        if self.radius_1 != other.radius_1:
            return False
        if self.radius_2 != other.radius_2:
            return False
        if self.dz != other.dz:
            return False
        if self.c_to_a_pitch != other.c_to_a_pitch:
            return False
        if self.is_repeat != other.is_repeat:
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
    def tracking(self):
        """Message field 'tracking'."""
        return self._tracking

    @tracking.setter
    def tracking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tracking' field must be of type 'bool'"
        self._tracking = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def armor_num(self):
        """Message field 'armor_num'."""
        return self._armor_num

    @armor_num.setter
    def armor_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armor_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'armor_num' field must be an integer in [-2147483648, 2147483647]"
        self._armor_num = value

    @builtins.property
    def armor_position(self):
        """Message field 'armor_position'."""
        return self._armor_position

    @armor_position.setter
    def armor_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'armor_position' field must be a sub message of type 'Pose'"
        self._armor_position = value

    @builtins.property
    def car_position(self):
        """Message field 'car_position'."""
        return self._car_position

    @car_position.setter
    def car_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'car_position' field must be a sub message of type 'Pose'"
        self._car_position = value

    @builtins.property
    def armor_velocity(self):
        """Message field 'armor_velocity'."""
        return self._armor_velocity

    @armor_velocity.setter
    def armor_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'armor_velocity' field must be a sub message of type 'Vector3'"
        self._armor_velocity = value

    @builtins.property
    def car_velocity(self):
        """Message field 'car_velocity'."""
        return self._car_velocity

    @car_velocity.setter
    def car_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'car_velocity' field must be a sub message of type 'Vector3'"
        self._car_velocity = value

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
    def v_yaw(self):
        """Message field 'v_yaw'."""
        return self._v_yaw

    @v_yaw.setter
    def v_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_yaw = value

    @builtins.property
    def radius_1(self):
        """Message field 'radius_1'."""
        return self._radius_1

    @radius_1.setter
    def radius_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radius_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radius_1 = value

    @builtins.property
    def radius_2(self):
        """Message field 'radius_2'."""
        return self._radius_2

    @radius_2.setter
    def radius_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'radius_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._radius_2 = value

    @builtins.property
    def dz(self):
        """Message field 'dz'."""
        return self._dz

    @dz.setter
    def dz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dz = value

    @builtins.property
    def c_to_a_pitch(self):
        """Message field 'c_to_a_pitch'."""
        return self._c_to_a_pitch

    @c_to_a_pitch.setter
    def c_to_a_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c_to_a_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'c_to_a_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._c_to_a_pitch = value

    @builtins.property
    def is_repeat(self):
        """Message field 'is_repeat'."""
        return self._is_repeat

    @is_repeat.setter
    def is_repeat(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_repeat' field must be of type 'bool'"
        self._is_repeat = value
