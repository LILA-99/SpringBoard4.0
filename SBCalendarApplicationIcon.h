/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplicationIcon.h"

@class SBCalendarIconContentsView;

@interface SBCalendarApplicationIcon : SBApplicationIcon {
	SBCalendarIconContentsView* _dateContents;
}
-(id)initWithApplication:(id)application;
-(void)dealloc;
-(void)setShowsImages:(BOOL)images;
-(void)prepareIconImageViewForRecycling;
-(CGImageRef)createComposedIconImageUsingContext:(CGContextRef)context;
-(void)updateInvitationBadge;
@end

