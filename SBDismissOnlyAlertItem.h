/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
	NSString* _title;
	NSString* _body;
	double _autoDismissInterval;
}
-(id)initWithTitle:(id)title body:(id)body;
-(void)dealloc;
-(double)autoDismissInterval;
-(void)setAutoDismissInterval:(double)interval;
-(void)setTitle:(id)title;
-(void)setBodyText:(id)text;
-(id)title;
-(id)bodyText;
-(void)performUnlockAction;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(id)lockLabel;
@end

