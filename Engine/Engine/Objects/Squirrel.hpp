#pragma once

#include "Physics\Physics.hpp"
#include "Graphics\Graphics.hpp"
#include "Object.hpp"
#include "../Utility/XMLParser.hpp"
#include "../Utility/INIParser.hpp"
#include "Physics/Collision/Collider.hpp"
#include "ObjectClasses/Pickups/Pickup.hpp"

namespace objects
{
	class Squirrel : public Object, public Collidable
	{
	public:
		Squirrel();
		~Squirrel();

		void draw(Layer& renderTarget);
		void update(InputData& inpData);

		void load(boost::property_tree::ptree& dataTree, ResourceManager& recMan);
		boost::property_tree::ptree write();

		void physicalCollide(CollisionData& data);
		bool pickupCollide(boost::shared_ptr<objects::Pickup>& p);	//parses collision with pickup objects returns true if object is used/picked up
	private:
		Animation RR;
		Animation RL;
		Animation idle;
		Animation TL; //turn left
		Animation TR; //turn right
		int fps;

		sf::Vector2f displaySize;
		sf::Vector2f frameSize;
		std::string RRName, RLName;
		std::string idleSSName;
		std::string TLName;
		std::string TRName;

		float moveForce;
		float jumpForce;
		bool jumping;
		sf::Clock jumpTimer;
		float jumpTime;

		int nutCapacity;			//maximum nuts that can be carried

		bool onGround;
		float airborneMultiplier;	//multiplier for airborne movement

		sf::Vector2f lastAcceleration;

		std::vector<boost::shared_ptr<objects::Pickup> > nuts;
	};
}
