//
// Created by est1908 on 11/22/12.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>
#import "SMStateMachine.h"


@interface SMStateMachineAsync : SMStateMachine

-(void)postAsync:(NSString *)event;
-(NSString *)postAsync:(NSString *)event after:(NSUInteger)milliseconds;
-(void)dropTimingEvent:(NSString *)eventUuid;



@end