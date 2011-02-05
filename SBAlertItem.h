/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "UIAlertViewDelegate.h"

@class UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView* _alertSheet;
	BOOL _disallowUnlockAction;
	BOOL _orderOverSBAlert;
	BOOL _preventLockOver;
	BOOL _didEverActivate;
}
-(Class)alertSheetClass;
-(id)alertSheet;
-(void)dealloc;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)allowAutoUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)undimsScreen;
-(BOOL)unlocksScreen;
-(BOOL)togglesMediaControls;
-(BOOL)dismissOnLock;
-(BOOL)dismissOnAlertActivation;
-(BOOL)willShowInAwayItems;
-(void)cleanPreviousConfiguration;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
-(float)lockLabelFontSize;
-(double)autoDismissInterval;
-(void)setDisallowsUnlockAction:(BOOL)action;
-(BOOL)disallowsUnlockAction;
-(void)performUnlockAction;
-(void)setOrderOverSBAlert:(BOOL)alert;
-(BOOL)preventLockOver;
-(void)setPreventLockOver:(BOOL)over;
-(void)willActivate;
-(void)didActivate;
-(void)willRelockForButtonPress:(BOOL)buttonPress;
-(void)buttonDismissed;
-(void)dismiss;
-(void)dismiss:(int)dismiss;
-(void)screenWillUndim;
-(void)willDeactivateForReason:(int)reason;
-(void)didDeactivateForReason:(int)reason;
-(void)noteVolumeOrLockPressed;
-(id)awayItem;
-(int)alertItemNotificationType;
-(id)alertItemNotificationDate;
-(id)alertItemNotificationSender;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end
