/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol _UILayoutItem <NSLayoutItem>
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leftAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * rightAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * widthAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * heightAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@optional
-(id)nsli_contentHeightVariable;
-(id)_contentWidthVariable;
-(id)nsli_contentWidthVariable;
-(id)_contentHeightVariable;

@required
-(id)nsli_widthVariable;
-(NSLayoutYAxisAnchor *)topAnchor;
-(id)nsli_boundsWidthVariable;
-(id)_boundsWidthVariable;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(id)_minYVariable;
-(BOOL)_uili_isFocusGuide;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(id)nsli_minXVariable;
-(id)_boundsHeightVariable;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(void)_faultInGuidesForConstraint:(id)arg1;
-(void*)_referenceView;
-(NSLayoutDimension *)heightAnchor;
-(id)nsli_minYVariable;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
-(id)_minXVariable;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(id)nsli_boundsHeightVariable;
-(id)nsli_heightVariable;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1;

@end

