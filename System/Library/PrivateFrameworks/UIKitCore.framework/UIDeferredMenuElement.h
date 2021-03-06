/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@protocol UIDeferredMenuElementDelegate;
@class NSString, UIImage, NSArray;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	BOOL _fulfilled;
	unsigned long long _attributes;
	NSString* _discoverabilityTitle;
	long long _state;
	/*^block*/id _elementProvider;
	id _metadata;
	id<UIDeferredMenuElementDelegate> _delegate;
	NSArray* _fulfilledElements;

}

@property (nonatomic,copy) id elementProvider;                                               //@synthesize elementProvider=_elementProvider - In the implementation block
@property (nonatomic,retain) id metadata;                                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<UIDeferredMenuElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fulfilledElements;                             //@synthesize fulfilledElements=_fulfilledElements - In the implementation block
@property (nonatomic,readonly) BOOL fulfilled;                                               //@synthesize fulfilled=_fulfilled - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;                              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementWithProvider:(/*^block*/id)arg1 ;
-(id)_immutableCopy;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(long long)_leafKeyModifierFlags;
-(NSString *)discoverabilityTitle;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(void)setState:(long long)arg1 ;
-(id<UIDeferredMenuElementDelegate>)delegate;
-(void)setMetadata:(id)arg1 ;
-(void)_fulfill;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadata;
-(long long)state;
-(BOOL)requiresAuthenticatedInput;
-(BOOL)fulfilled;
-(void)setDelegate:(id<UIDeferredMenuElementDelegate>)arg1 ;
-(BOOL)isLeaf;
-(NSString *)description;
-(void)_performWithTarget:(id)arg1 ;
-(void)setElementProvider:(id)arg1 ;
-(id)elementProvider;
-(NSArray *)fulfilledElements;
-(BOOL)isLoadingPlaceholder;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(unsigned long long)attributes;
-(BOOL)_isDefaultCommand;
@end

