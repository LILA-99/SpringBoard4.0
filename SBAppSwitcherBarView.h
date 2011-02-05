/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import "SBAppSwitcherScrollViewDelegate.h"

@class UIImageView, SBAppSwitcherScrollView, NSMutableArray;
@protocol SBAppSwitcherBarViewDelegate;

@interface SBAppSwitcherBarView : UIView <SBAppSwitcherScrollViewDelegate> {
	id<SBAppSwitcherBarViewDelegate> _delegate;
	int _orientation;
	NSMutableArray* _appIcons;
	UIView* _contentView;
	UIImageView* _backgroundImage;
	UIView* _auxView;
	SBAppSwitcherScrollView* _scrollView;
	UIImageView* _topShadowView;
	UIImageView* _bottomShadowView;
}
@property(retain, nonatomic) UIView* auxiliaryView;
@property(assign, nonatomic) id<SBAppSwitcherBarViewDelegate> delegate;
+(unsigned)iconsPerPage:(int)page;
+(CGSize)viewSize;
-(id)initWithOrientation:(int)orientation;
-(void)dealloc;
-(void)prepareForDisplay:(id)display orientation:(int)orientation;
-(id)appIcons;
-(void)positionForHidden;
-(void)positionForRevealed;
-(void)setEditing:(BOOL)editing;
-(BOOL)isScrollingOrOtherwiseBusy;
-(void)removeIcon:(id)icon;
-(void)replaceIcons:(id)icons with:(id)with;
-(id)applicationIconForDisplayIdentifier:(id)displayIdentifier;
-(BOOL)nowPlayingControlsVisible;
-(void)_iconRemoveDidStop:(id)_iconRemove finished:(id)finished context:(id)context;
-(void)_reflowContent:(BOOL)content;
-(void)_positionAtFirstPage:(BOOL)firstPage;
-(void)layoutSubviews;
-(void)_setOrientation:(int)orientation;
-(CGRect)_frameForIndex:(unsigned)index withSize:(CGSize)size;
-(unsigned)_pageCount;
-(CGPoint)_firstPageOffset;
-(void)didMoveToSuperview;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(BOOL)scrollView:(id)view shouldCancelInContentForView:(id)view2;
@end

