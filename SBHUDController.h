/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIView, UIWindow, SBHUDView;

@interface SBHUDController : NSObject {
	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	int _orientation;
}
+(id)sharedHUDController;
-(void)dealloc;
-(void)_recenterHUDView;
-(void)reorientHUDIfNeeded:(BOOL)needed;
-(void)_createUI;
-(void)_tearDown;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_orderWindowOut:(id)anOut;
-(void)presentHUDView:(id)view;
-(void)presentHUDView:(id)view autoDismissWithDelay:(double)delay;
-(id)visibleHUDView;
-(void)hideHUDView;
@end

