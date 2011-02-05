/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSArray, NSString;

@interface SBWiFiTrustAlertItem : SBAlertItem {
	NSString* _displayName;
	NSString* _networkName;
	NSArray* _certificateArray;
	BOOL _sentResponse;
}
-(Class)alertSheetClass;
-(id)initWithCertificateArray:(id)certificateArray networkName:(id)name;
-(void)dealloc;
-(id)_scanDictionaryWithCertificateData;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)didDeactivateForReason:(int)reason;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
@end

