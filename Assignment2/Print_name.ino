// Define necesarry libraries
#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>


// Create a pointer object of TTGOClass
TTGOClass *ttgo;


// Create a function to print text
void WriteTextCenter(String text)
{ 
  // Calculate the width and height of the given text
  int textWidth = ttgo->tft->textWidth(text);
  int textHeight = ttgo->tft->fontHeight();

  // Calculate the x and y distances from the textWidth and textHeight
  int x = (240 - textWidth) / 2;  // The resolution of the screen is 240 by 240 and hence the calculation
  int y = (240 - textHeight) / 2;

  // Print the string using the buildin function with text and x,y pos as arguments
  ttgo->tft->drawString(text,  x, y);
}

void setup()
{
    // Call getWatch function from the "TTGOClass" class
    ttgo = TTGOClass::getWatch();
    
    // Call the begin and openBL(turn on back light) function using the ttgo object
    ttgo->begin();
    ttgo->openBL();

    // Fill the screen with white background and set the text color and font size
    ttgo->tft->fillScreen(TFT_WHITE);
    ttgo->tft->setTextColor(TFT_BLACK, TFT_WHITE);
    ttgo->tft->setTextFont(4);
    
    // Call the function
    WriteTextCenter("Ramprakash");
}

void loop()
{ 
}
