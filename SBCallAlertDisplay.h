/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"


@interface SBCallAlertDisplay : SBSlidingAlertDisplay {
	BOOL _wasToldToStopRinging;
	BOOL _answered;
	BOOL _pendingRing;
	BOOL _isVCCallWaitingRinging;
}
+(id)newBottomLockBarForDisplay:(id)display;
+(id)newBottomBarForInstance:(id)instance;
-(void)dealloc;
-(void)ringOrVibrate;
-(void)stopRingingOrVibrating;
-(BOOL)wasToldToStopRinging;
-(void)ringerChanged;
-(void)updateLCDWithName:(id)name label:(id)label breakPoint:(unsigned)point;
-(void)updateImageFromPerson:(void*)person;
-(void)updateCallInformationFromAlert;
-(void)setAlert:(id)alert;
-(BOOL)shouldEnableWirelessLCD;
-(void)checkForStatusChange;
-(void)_ringIfNecessary;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(void)finishedAnimatingIn;
-(id)additionalURLParameter;
-(void)answerCall:(CTCallRef)call;
-(void)answer:(id)answer;
-(void)lockBarUnlocked:(id)unlocked;
-(void)dismiss;
-(void)ignore;
-(void)handleVolumeEvent:(GSEventRef)event;
@end

