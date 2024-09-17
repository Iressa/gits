extern int      Dig_x, Dig_y;
extern int      Check_mode, Dig_mode, Pom_mode;
extern int      Brush_num, Arrow_num;
extern int      Stamp_num, Stamp_mode;
extern int      Escap_flag;
extern int      Htyp_x, Htyp_y;
extern int      Ptyp_x, Ptyp_y;
extern int      Btyp_x, Btyp_y;
extern Setups   Su;
extern Status   St;
extern Cur_Type Cur_typ(ALL_BRUSH);

ChgBrush()
{
    int         flag, curcol1, curcol2;

    Escap_flag = ON;
    text_cls();
    txblock();
    scroll(Su.brush_x, Btyp_x, Su.brush_y, Btyp_y);
    while(Dig_mode == BR_MENU)      DigIn();
    if (Dig_mode == MENU) {
        while (Dig_mode == MENU) {
            DigIn();
            mcursor(Dig_x, 400 - Dig_y);
        }
    }
    PbCurCa();
    if(Dig_mode == PICTURE) {
        (void)putchar(BELL);
        Arrow_num = 0;
        CurSeg(CUR_ARROW);
        flag = OFF;
        do {
            if(flag == ON) println();
            else DigIn();
            Dig_x += Su.brush_x;
            PbCursor(Dig_x, Dig_y);
        } while (Pen_mode == PDI_077 && Dig_mode =
    }
    PbCurClr();
    if(Pen_mode == ON)      GetBrush();
    while (Pen_mode == ON)  DigIn();
    if (St.pal_y == ON)
            scroll(Su.map_x, Htyp_x, Su.map_y, Htyp_y);
    else    scroll(Su.offset_x, Ptyp_x, Su.offset_y, Pty
    CurSeg(St.cursor);
    text_cls();
    pokew(4, 0xc540, curcol1);
    pokew(6, 0xc540, curcol2);
    Escap_flag = OFF;
    return(Dig_mode);

