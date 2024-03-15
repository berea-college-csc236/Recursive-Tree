/* Recursive-Spiral.cpp
   Recursive Tree Demo
   by Jesse Walker-Schadler
   Forked from https://replit.com/talk/share/C-Turtle
*/
#include "CTurtle.hpp"

namespace ct = cturtle;

void tree(ct::Turtle& rt, int len) {
    if (len > 5) {
        rt.forward(len);
        rt.right(20);
        tree(rt, len - 15);
        rt.left(40);
        tree(rt, len - 15);
        rt.right(20);
        rt.back(len);
    }
}

int main() {
    ct::TurtleScreen scr;
    ct::Turtle rt(scr);
    rt.speed(ct::TS_FASTEST);

    rt.penup();
    rt.left(90);
    rt.back(140);
    rt.pendown();

    tree(rt, 100);

    rt.right(115);
    rt.write("Hello,\nTree!", { "black" }, 2.5f);

    scr.exitonclick();
    return 0;
}
