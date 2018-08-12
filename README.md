# CarND-PID-Control-Project  

### Yulong Li  

---  

## Reflection  

### Describe the effect each of the P, I, D components had in your implementation.  

P is proportional to the error (cte) between setpoint and current position. It directly modifies the output based on error  
I is proportional to the integral of the error. It helps for faster response and driving output closed to setpoint but can cause overshoot.    
D is proportional to the derivative of the error. It helps to predict future state and reduce overshoot.  

Demo:  

![demo](https://github.com/yulongl/CarND-PID-Control-Project/blob/master/20180812_170648.gif)  

Parameters:
Kp = 0.12, Ki = 0.0018, Kd = 15.  
  
---  

### Describe how the final hyperparameters were chosen.  

Parameters were tuned manually.  

The twiddle method taught in the lecture may not work well for this project. Because it's not easy to model the simulator vehicle as no additional information like vehicle dynamic is given. I also found that braking and accelaration affect the cornering maneuver even with the same steering angle.

It could be helpful to directly use the simulator instead of modeling the vehicle to do the twiddle tuning, but it would be very time consuming because the vehicle has to repeat the same session of the track to tune the parameters.  

With manual tuning, I first tuned P with zero I and zero D. Then added D and finally a small amount of I to help with a faster response.  

The final parameters are:  
Kp = 0.12, Ki = 0.0018, Kd = 15.  



