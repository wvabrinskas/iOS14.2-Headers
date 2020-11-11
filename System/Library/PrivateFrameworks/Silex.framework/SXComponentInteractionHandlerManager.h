/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandlerManager.h>

@protocol SXComponentInteractionHandlerManager <NSObject>
@required
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;
-(id)interactionsForComponentView:(id)arg1;
-(id)componentViewForLocation:(CGPoint)arg1;

@end


@class NSMapTable, SXViewport, NSString;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager> {

	NSMapTable* _interactionHandlers;
	SXViewport* _viewport;

}

@property (nonatomic,readonly) NSMapTable * interactionHandlers;              //@synthesize interactionHandlers=_interactionHandlers - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                         //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3 ;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2 ;
-(void)updateUserInteractionForComponentView:(id)arg1 ;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2 ;
-(NSMapTable *)interactionHandlers;
-(id)interactionsForComponentView:(id)arg1 ;
-(id)initWithViewport:(id)arg1 ;
-(id)componentViewForLocation:(CGPoint)arg1 ;
@end
