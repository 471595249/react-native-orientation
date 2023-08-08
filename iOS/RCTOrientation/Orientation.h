//
//  Orientation.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

@interface Orientation : NSObject <RCTBridgeModule>
+ (Orientation *)shareInstance;
- (void)initialOrientation;
- (void)setOrientation: (UIInterfaceOrientationMask)orientation;
- (UIInterfaceOrientationMask)getOrientation;
@end
