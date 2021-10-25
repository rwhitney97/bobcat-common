
#define SERIAL_MSG_START_INDICATOR '<'
#define SERIAL_MSG_END_INDICATOR '>'

enum class DAQ_SERIAL_MSG {
    NOT_A_MSG = 0,
    PING,
    ENGAGE_FAILSAFE,
    JOYSTICK_MSG,
    GPS_MSG,
    MOTOR_CMD,
    LED_CMD
};

enum class DAQ_SERIAL_MSG_LEN {
    NOT_A_MSG = 1,
    PING = 1,
    ENGAGE_FAILSAFE = 1,
    JOYSTICK_MSG = 5,
    GPS_MSG = 1,
    MOTOR_CMD = 5,
    LED_CMD = 1
};

enum class VEHICLE_STATE {
    MANUAL = 0,
    ACRO,
    AUTO
};

enum class BOBCAT_TELEM_MSG {
    NOT_A_MSG = 0,
    PING,
    ENGAGE_FAILSAFE,
    RETURN_2_HOME,
    LOITER,
    SBUS_LOG,
    GPS_LOG
};

enum class BOBCAT_TELEM_MSG_LEN {
    NOT_A_MSG = 1,
    PING = 1,
    ENGAGE_FAILSAFE = 1,
    RETURN_2_HOME = 1,
    LOITER = 1,
    SBUS_LOG = 1,
    GPS_LOG = 1
};

