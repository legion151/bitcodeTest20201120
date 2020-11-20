//
//  bitcodeTest20201120.h
//  bitcodeTest20201120
//
// Defines objc api for bitcodeTest20201120 implementation in RoboVM
//

#import <Foundation/Foundation.h>

//
// Calculator class
//
@interface Calculator
-(id)init;
-(id)initWithValue:(int)startValue;
-(int)reset;
-(int)add:(int) i;
-(int)sub:(int) i;
-(int)result;
@end

//
// bitcodeTest20201120Demo class with basic API demonstration
//
@interface bitcodeTest20201120Demo
-(id)init;
-(id)initWithText:(NSString*)text;
+(void)hello;
-(NSString*)roboVmVersion;
-(void)installSignals:(void(^)(void))installer;
@end
