/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class UITextView;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView* _textView;
}
+(id)activeItem;
-(id)init;
-(void)dealloc;
-(BOOL)willShowInAwayItems;
-(void)didPresentAlertView:(id)view;
-(void)_updateTextView;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_simStatusChanged:(id)changed;
-(void)willActivate;
-(void)didDeactivateForReason:(int)reason;
@end

