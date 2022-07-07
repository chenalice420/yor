static const char norm_fg[] = "#abcac2";
static const char norm_bg[] = "#060C11";
static const char norm_border[] = "#778d87";

static const char sel_fg[] = "#abcac2";
static const char sel_bg[] = "#9D2B25";
static const char sel_border[] = "#abcac2";

static const char urg_fg[] = "#abcac2";
static const char urg_bg[] = "#5F6054";
static const char urg_border[] = "#5F6054";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
