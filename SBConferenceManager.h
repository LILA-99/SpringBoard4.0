/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CNFSoundPlayerDelegateProtocol.h"
#import <Foundation/NSObject.h>

@class CNFAudioPlayer, CNFConferenceController, NSDate, SBVideoAlert;

@interface SBConferenceManager : NSObject <CNFSoundPlayerDelegateProtocol> {
	CNFConferenceController* _conferenceController;
	SBVideoAlert* _currentVideoAlert;
	unsigned _avState;
	NSDate* _conferenceStartedDate;
	CNFAudioPlayer* _player;
}
@property(readonly, assign) SBVideoAlert* currentVideoAlert;
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController* conferenceController;
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(void)alertHasBeenHandled;
-(BOOL)videoConferenceInvitationExists;
-(BOOL)inConference;
-(void)answerIncomingConference;
-(void)declineIncomingConference;
-(void)endConference;
-(void)playSound:(int)sound numOfLoops:(int)loops pauseDuration:(float)duration;
-(void)stopAudioPlayer;
-(void)dealloc;
-(void)updateStatusBar;
-(void)_updateStatusBar;
-(id)durationString;
-(void)_handleInvitation:(id)invitation;
-(void)_handleMissedInvitation:(id)invitation;
-(void)_conferenceStateChanged:(id)changed;
-(void)audioPlayerDidStopPlaying:(id)audioPlayer;
@end
