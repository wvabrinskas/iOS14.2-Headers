/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UICoordinateSpace.h>

@protocol UICoordinateSpace;
@class NSString;

@interface CSRegion : NSObject <NSCopying, UICoordinateSpace> {

	BOOL _hidden;
	BOOL _reservedForHorizontalScrolling;
	NSString* _identifier;
	long long _role;
	id<UICoordinateSpace> _coordinateSpace;
	id<UICoordinateSpace> _identity;
	id _provider;
	CGRect _extent;

}

@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;                                           //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect extent;                                                                          //@synthesize extent=_extent - In the implementation block
@property (assign,nonatomic) long long role;                                                                           //@synthesize role=_role - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> identity;                                                    //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic,__weak) id provider;                                                                       //@synthesize provider=_provider - In the implementation block
@property (assign,getter=isReservedForHorizontalScrolling,nonatomic) BOOL reservedForHorizontalScrolling;              //@synthesize reservedForHorizontalScrolling=_reservedForHorizontalScrolling - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)regionForCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2 ;
+(id)regionForCoordinateSpace:(id)arg1 ;
-(void)setIdentity:(id<UICoordinateSpace>)arg1 ;
-(void)setRole:(long long)arg1 ;
-(BOOL)isHidden;
-(CGRect)extent;
-(id<UICoordinateSpace>)identity;
-(void)setProvider:(id)arg1 ;
-(id)role:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2 role:(long long)arg3 ;
-(NSString *)identifier;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)setReservedForHorizontalScrolling:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(long long)role;
-(BOOL)intersectsCoordinateSpace:(id)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)isReservedForHorizontalScrolling;
-(id)regionForCoordinateSpace:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)provider;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

