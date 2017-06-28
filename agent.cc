// Copyright 2017 Stefano Pellegrini

#include "agent.h"

#include "utils.h"

Agent::Agent(const Battery* battery, const int* time) :
  battery_(battery), time_(time) {}
  
  
  
Direction Agent::NextDirection(const Perception& p) {
  

  

    
    if (p.HasObstacle(last_direction_)){
    	if (last_direction_==Direction::RIGHT){
 			last_direction_ =Direction::LEFT;
 		}else {
 			last_direction_=Direction::RIGHT;
		 }
    	return Direction::DOWN;
    } 
	    	
    	return last_direction_;
	
	
    	
  
}

bool Agent::IsAlive() const {
  return battery_->Level() > 0;
}
