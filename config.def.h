#ifndef CONFIG_H
#define CONFIG_H

#define BorderWidth 15
#define BorderColor 240 + (240<<8) + (240<<16)
#define MOD Mod4Mask

const char* menu[]  = {"dmenu_run", 0};
const char* term[]  = {"st", 0};
const char* surf[]  = {"tabbed", "-c", "surf", "-e", 0};
const char* music[] = {"popup", "ncmpcpp", 0};
const char* audio[] = {"popup", "pulsemixer", 0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {MOD,      XK_k, win_move, {.com = (const char*[]){"move", "n"}, .i = 40}},
    {MOD,      XK_j, win_move, {.com = (const char*[]){"move", "s"}, .i = 40}},
    {MOD,      XK_l, win_move, {.com = (const char*[]){"move", "e"}, .i = 40}},
    {MOD,      XK_h, win_move, {.com = (const char*[]){"move", "w"}, .i = 40}},

    {MOD|ShiftMask, XK_k, win_move, {.com = (const char*[]){"resize", "n"}, .i = 40}},
    {MOD|ShiftMask, XK_j, win_move, {.com = (const char*[]){"resize", "s"}, .i = 40}},
    {MOD|ShiftMask, XK_l, win_move, {.com = (const char*[]){"resize", "e"}, .i = 40}},
    {MOD|ShiftMask, XK_h, win_move, {.com = (const char*[]){"resize", "w"}, .i = 40}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_Return, run, {.com = term}},
    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_m,      run, {.com = music}},
    {MOD, XK_w,      run, {.com = surf}},
    {MOD, XK_p,      run, {.com = audio}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
