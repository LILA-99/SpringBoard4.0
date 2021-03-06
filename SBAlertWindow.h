/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIWindow.h>

@class NSMutableDictionary, NSMutableArray, SBAlertDisplay, UIView;

@interface SBAlertWindow : UIWindow {
	UIView* _contentLayer;
	unsigned _isAnimating : 1;
	unsigned _isInvalid : 1;
	unsigned _handlerActive : 1;
	float _finalAlpha;
	int _currentOrientation;
	SBAlertDisplay* _currentDisplay;
	NSMutableArray* _stackedAlertDisplays;
	NSMutableDictionary* _alertToDisplayMap;
}
+(CGRect)constrainFrameToScreen:(CGRect)screen;
-(id)initWithContentRect:(CGRect)contentRect;
-(void)dealloc;
-(BOOL)isOpaque;
-(id)stackedDisplayForAlert:(id)alert;
-(id)contentLayer;
-(void)displayAlert:(id)alert;
-(BOOL)deactivateAlert:(id)alert;
-(int)displayCount;
-(void)dismissWindow:(id)window;
-(void)alertDisplayWillDismiss;
-(void)popInCurrentDisplay;
-(id)currentDisplay;
-(void)setHandlerAlreadyActive:(BOOL)active;
-(BOOL)handlerAlreadyActive;
-(void)_setupContentLayerForCurrentOrientation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingContentViewForWindow:(id)window;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(void)noteInterfaceOrientationChangingTo:(int)to animated:(BOOL)animated;
@end

