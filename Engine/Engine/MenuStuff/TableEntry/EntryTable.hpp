#pragma once
#include "TablePair.hpp"

class EntryTable : public MenuElement
{
public:
	EntryTable();
	EntryTable(const double& xspac, const double& yspac, const unsigned int& csiz, const sf::Vector2f& pos, sf::Font * const ffont, const sf::Color& fcolor, sf::Texture* const bgTex, const sf::Vector2f& bgSiz, sf::Texture * const fbarTex, const double& findent);

	~EntryTable();

	void setup(const double& xspac, const double& yspac, const unsigned int& csiz, const sf::Vector2f& pos);

	void setMap(std::map<std::string, std::string>& fmap);

	void update() {};
	void update(MouseData& fmouseData, const char& typedChar, KeyboardData& fkeyData);
	void draw(sf::RenderWindow& window, sf::Vector2f drawPos);
	void resetMD() {};
private:
	sf::Vector2f position;
	sf::Font* font;
	sf::Color color;
	sf::Texture* bgTexture;
	sf::Vector2f bgSize;
	sf::Texture * barTexture;
	double indent;
	
	std::vector<TablePair> tablePairs;
	std::map<std::string, std::string>* strMap;
	std::vector<std::string> recordStrs;

	double xSpacing;
	double ySpacing;
	unsigned int charSize;

};
