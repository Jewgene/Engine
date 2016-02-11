#include "MouseData.h"

//----------------------------------------------------------------------------------------------------------------------------***************************
//-----------------------------------------PUBLIC-----------------------------------------------------------------------------***************************
//----------------------------------------------------------------------------------------------------------------------------***************************



/*-----------------------------------------------------------------------
------------------------------Constructor--------------------------------
-----------------------------------------------------------------------*/
MouseData::MouseData()										//Empty Constructor
{

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*-----------------------------------------------------------------------
---------------------------SetMousePosition------------------------------
-----------------------------------------------------------------------*/
void MouseData::setMousePosition(sf::Vector2i fposition)	//sets the mousePosition
{

	mousePosition = fposition;

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*-----------------------------------------------------------------------
-----------------------setBothButtonsData--------------------------------
-----------------------------------------------------------------------*/
void MouseData::setButtonData(sf::Vector2i fdata)			//sets buttonData to another vector2i
{

	buttonData = fdata;

}



/*-----------------------------------------------------------------------
-----------------------setLeftMouseButtonData----------------------------
-----------------------------------------------------------------------*/
void MouseData::setLeftButtonData(int fdata)				//sets the left mouse data to an integer that corresponds to a buttonstate
{

	buttonData.x = fdata;

}



/*-----------------------------------------------------------------------
-----------------------setLeftMouseButtonData----------------------------
-----------------------------------------------------------------------*/
void MouseData::setRightButtonData(int fdata)				//sets the right mouse data
{

	buttonData.y = fdata;

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*-----------------------------------------------------------------------
-----------------------getPosition---------------------------------------
-----------------------------------------------------------------------*/
sf::Vector2i MouseData::getMousePosition()					//returns mousePosition, the position of the mouse
{

	return mousePosition;

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*-----------------------------------------------------------------------
-----------------------getBothButtonData---------------------------------
-----------------------------------------------------------------------*/
sf::Vector2i MouseData::getButtonData()						//returns the button data for both buttons in a vector2i
{

	return buttonData;

}



/*-----------------------------------------------------------------------
-----------------------getLeftButtonData---------------------------------
-----------------------------------------------------------------------*/
int MouseData::getLeftButtonData()							//returns solely the left button data
{

	return buttonData.x;

}



/*-----------------------------------------------------------------------
-----------------------getRightButtonData--------------------------------
-----------------------------------------------------------------------*/
int MouseData::getRightButtonData()							//returns solely the right button data
{

	return buttonData.y;

}

//----------------------------------------------------------------------------------------------------------------------------***************************