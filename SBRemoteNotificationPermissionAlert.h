/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class SBApplication;

@interface SBRemoteNotificationPermissionAlert : SBAlertItem {
	SBApplication* _app;
}
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)shouldShowInLockScreen;
@end

