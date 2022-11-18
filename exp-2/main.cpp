#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Chart.H>


int main(int argc, char **argv) 
{
  Fl_Window *window = new Fl_Window(640,480);
  Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);

  int x = 10;
  int y = 10;
  int width = 50;
  int height = 50;

  Fl_Button *button = new Fl_Button(x, y, width, height, "label");
  Fl_Light_Button *lbutton = new Fl_Light_Button(x + 50, y + 50, width, height);
  Fl_Round_Button *rbutton = new Fl_Round_Button(x + 100, y+ 50, width, height, "label");

  button->type(FL_NORMAL_BUTTON);
  lbutton->type(FL_TOGGLE_BUTTON);
  rbutton->type(FL_RADIO_BUTTON);

  Fl_Input *input = new Fl_Input(x, y, width, height, "label");
  input->value("Now is the time for all good men...");

  Fl_Chart *chart = new Fl_Chart(x + 100, y + 100, width + 100, height + 100);

  window->end();
  window->show(argc, argv);
  return Fl::run();
}