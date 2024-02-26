#include "splashkit.h"
#include <iostream>

void picture_1()
{
    fill_rectangle(COLOR_LIGHT_GREEN, 200,200,400,300);
    fill_rectangle(COLOR_RED,380,400,50,100);
    fill_circle(COLOR_YELLOW,420,450,5);
    fill_rectangle(COLOR_RED,250,250,80,80);
    fill_rectangle(COLOR_RED,470,250,80,80);
    fill_triangle(COLOR_BLUE,180,200,620,200,400,50);
}

void picture_2()
{
    fill_rectangle(COLOR_BLUE,250,200,300,300);
    fill_circle(COLOR_YELLOW,300,300,30);
    fill_circle(COLOR_YELLOW,500,300,30);
    fill_rectangle(COLOR_ORANGE,350,400,100,50);
}

int main()
{
    open_window("My Picture", 800, 600);
    bool show_picture_1 = false;
    bool show_picture_2 = false;
    
    while(not quit_requested())
    {
        process_events();
        clear_screen(COLOR_BLACK);
        
        // Draw red squares
        fill_rectangle(COLOR_RED, 100, 100, 50, 50);
        fill_rectangle(COLOR_RED, 650, 100, 50, 50);
        
        // Check for mouse clicks on red squares
        if (mouse_clicked(LEFT_BUTTON) and point_in_rectangle(mouse_position(),rectangle_from(100, 100, 50, 50)))
        {
            show_picture_1 = true;
            show_picture_2 = false;
        }
        if (mouse_clicked(LEFT_BUTTON) and point_in_rectangle(mouse_position(),rectangle_from(650, 100, 50, 50)))
        {
            show_picture_1 = false;
            show_picture_2 = true;
        }
        
        // Draw the appropriate picture
        if (show_picture_1)
        {
            picture_1();
        }
        else if (show_picture_2)
        {
            picture_2();
        }
        
        refresh_screen(60);
    }
    
    return 0;
}