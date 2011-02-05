/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString, NSTimer, SBApplication;
@protocol SBRemoteLocalNotificationAlertDelegate;

@interface SBRemoteLocalNotificationAlert : SBAlertItem {
	id<SBRemoteLocalNotificationAlertDelegate> _delegate;
	SBApplication* _app;
	NSString* _body;
	NSString* _actionLabel;
	NSString* _customLockLabel;
	NSString* _alertLaunchImage;
	BOOL _showActionButton;
	BOOL _hideTitle;
	BOOL _allowSnooze;
	NSTimer* _ringtoneAutoMuteTimer;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	id _context;
}
@property(assign, nonatomic) id<SBRemoteLocalNotificationAlertDelegate> delegate;
@property(assign, nonatomic) BOOL hideTitle;
@property(assign, nonatomic) BOOL allowSnooze;
@property(retain, nonatomic) NSString* customLockLabel;
@property(retain, nonatomic) NSString* alertLaunchImage;
@property(retain, nonatomic) id context;
+(id)presentWithLocalNotification:(id)localNotification application:(id)application;
+(id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+(id)alertMatchingContext:(id)context;
+(void)playAlertSound:(BOOL)sound soundName:(id)name inBundle:(id)bundle isRingtone:(BOOL)ringtone;
+(BOOL)isPlayingRingtone;
+(void)stopPlayingAlertSoundOrRingtone;
-(id)initWithApplication:(id)application body:(id)body showActionButton:(BOOL)button actionLabel:(id)label;
-(void)dealloc;
-(Class)alertSheetClass;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
-(float)lockLabelFontSize;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)performUnlockAction;
-(void)willDeactivateForReason:(int)reason;
-(void)snoozeIfPossible;
-(void)snoozeOrDismiss;
-(void)startRingtoneAutoMuteTimer;
-(void)_ringtoneAutoMuteTimerFired;
-(void)stopRingtoneAutoMuteTimer;
-(int)alertItemNotificationType;
-(id)alertItemNotificationSender;
@end

