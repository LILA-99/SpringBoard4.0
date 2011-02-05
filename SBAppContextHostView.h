/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBAppContextHostView : UIView {
	NSMutableArray* _contexts;
	BOOL _hostingEnabled;
}
@property(assign, nonatomic, getter=isHostingEnabled) BOOL hostingEnabled;
@property(readonly, assign, nonatomic) unsigned count;
-(id)initWithDefaultSize;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)description;
-(void)_setLayerFrameAndTransform:(id)transform;
-(BOOL)isContextIdHidden:(unsigned)hidden;
-(void)setContextId:(unsigned)anId hidden:(BOOL)hidden;
-(void)willOrderInContextWithId:(unsigned)anId windowLevel:(float)level windowOutput:(int)output;
-(void)didOrderOutContextWithId:(unsigned)anId;
-(void)setOrderOutPending:(BOOL)pending forContextId:(unsigned)contextId;
-(void*)createIOSurfaceForFrame:(CGRect)frame;
-(void*)createIOSurfaceForFrame:(CGRect)frame outTransform:(CGAffineTransform*)transform;
-(void*)createIOSurfaceForFrame:(CGRect)frame includeAdditionalContext:(unsigned)context outTransform:(CGAffineTransform*)transform;
@end
