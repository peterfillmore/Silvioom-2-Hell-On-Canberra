//KEYD_LEFT, KEYD_DOWN, KEYD_RIGHT, KEYD_UP, KEYD_A, KEYD_B, L, R, START, SELECT

typedef enum {
        EVENT_KEY_DOWN_DOWN = 0,
        EVENT_KEY_DOWN_UP,
        EVENT_KEY_UP_DOWN,
        EVENT_KEY_UP_UP,
        EVENT_KEY_RIGHT_DOWN,
        EVENT_KEY_RIGHT_UP,
        EVENT_KEY_LEFT_DOWN,
        EVENT_KEY_LEFT_UP,
        EVENT_KEY_A_UP,
        EVENT_KEY_A_DOWN,
        EVENT_KEY_B_DOWN,
        EVENT_KEY_B_UP,
        EVENT_KEY_L_DOWN,
        EVENT_KEY_L_UP,
        EVENT_KEY_R_DOWN,
        EVENT_KEY_R_UP,
        EVENT_KEY_START_DOWN,
        EVENT_KEY_START_UP,
        EVENT_KEY_SELECT_DOWN,
        EVENT_KEY_SELECT_UP,
} event_type_en;

typedef struct {
	event_type_en type;
} ev_t;
