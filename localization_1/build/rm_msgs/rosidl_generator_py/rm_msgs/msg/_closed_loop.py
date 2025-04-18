# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_msgs:msg/ClosedLoop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClosedLoop(type):
    """Metaclass of message 'ClosedLoop'."""

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
                'rm_msgs.msg.ClosedLoop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__closed_loop
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__closed_loop
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__closed_loop
            cls._TYPE_SUPPORT = module.type_support_msg__msg__closed_loop
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__closed_loop

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

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


class ClosedLoop(metaclass=Metaclass_ClosedLoop):
    """Message class 'ClosedLoop'."""

    __slots__ = [
        '_image_header',
        '_shoot_header',
        '_id',
        '_armor_num',
        '_r',
        '_another_r',
        '_dz',
        '_yaw',
        '_c_to_a_pitch',
        '_now_pose',
        '_pred_pose',
        '_now_armor_pose',
        '_v0',
        '_theta',
        '_fly_t',
    ]

    _fields_and_field_types = {
        'image_header': 'std_msgs/Header',
        'shoot_header': 'std_msgs/Header',
        'id': 'string',
        'armor_num': 'int8',
        'r': 'double',
        'another_r': 'double',
        'dz': 'double',
        'yaw': 'double',
        'c_to_a_pitch': 'double',
        'now_pose': 'geometry_msgs/Pose',
        'pred_pose': 'geometry_msgs/Pose',
        'now_armor_pose': 'geometry_msgs/Pose',
        'v0': 'double',
        'theta': 'double',
        'fly_t': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.image_header = kwargs.get('image_header', Header())
        from std_msgs.msg import Header
        self.shoot_header = kwargs.get('shoot_header', Header())
        self.id = kwargs.get('id', str())
        self.armor_num = kwargs.get('armor_num', int())
        self.r = kwargs.get('r', float())
        self.another_r = kwargs.get('another_r', float())
        self.dz = kwargs.get('dz', float())
        self.yaw = kwargs.get('yaw', float())
        self.c_to_a_pitch = kwargs.get('c_to_a_pitch', float())
        from geometry_msgs.msg import Pose
        self.now_pose = kwargs.get('now_pose', Pose())
        from geometry_msgs.msg import Pose
        self.pred_pose = kwargs.get('pred_pose', Pose())
        from geometry_msgs.msg import Pose
        self.now_armor_pose = kwargs.get('now_armor_pose', Pose())
        self.v0 = kwargs.get('v0', float())
        self.theta = kwargs.get('theta', float())
        self.fly_t = kwargs.get('fly_t', float())

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
        if self.image_header != other.image_header:
            return False
        if self.shoot_header != other.shoot_header:
            return False
        if self.id != other.id:
            return False
        if self.armor_num != other.armor_num:
            return False
        if self.r != other.r:
            return False
        if self.another_r != other.another_r:
            return False
        if self.dz != other.dz:
            return False
        if self.yaw != other.yaw:
            return False
        if self.c_to_a_pitch != other.c_to_a_pitch:
            return False
        if self.now_pose != other.now_pose:
            return False
        if self.pred_pose != other.pred_pose:
            return False
        if self.now_armor_pose != other.now_armor_pose:
            return False
        if self.v0 != other.v0:
            return False
        if self.theta != other.theta:
            return False
        if self.fly_t != other.fly_t:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image_header(self):
        """Message field 'image_header'."""
        return self._image_header

    @image_header.setter
    def image_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'image_header' field must be a sub message of type 'Header'"
        self._image_header = value

    @builtins.property
    def shoot_header(self):
        """Message field 'shoot_header'."""
        return self._shoot_header

    @shoot_header.setter
    def shoot_header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'shoot_header' field must be a sub message of type 'Header'"
        self._shoot_header = value

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
            assert value >= -128 and value < 128, \
                "The 'armor_num' field must be an integer in [-128, 127]"
        self._armor_num = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._r = value

    @builtins.property
    def another_r(self):
        """Message field 'another_r'."""
        return self._another_r

    @another_r.setter
    def another_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'another_r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'another_r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._another_r = value

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
    def now_pose(self):
        """Message field 'now_pose'."""
        return self._now_pose

    @now_pose.setter
    def now_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'now_pose' field must be a sub message of type 'Pose'"
        self._now_pose = value

    @builtins.property
    def pred_pose(self):
        """Message field 'pred_pose'."""
        return self._pred_pose

    @pred_pose.setter
    def pred_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pred_pose' field must be a sub message of type 'Pose'"
        self._pred_pose = value

    @builtins.property
    def now_armor_pose(self):
        """Message field 'now_armor_pose'."""
        return self._now_armor_pose

    @now_armor_pose.setter
    def now_armor_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'now_armor_pose' field must be a sub message of type 'Pose'"
        self._now_armor_pose = value

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
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta = value

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
