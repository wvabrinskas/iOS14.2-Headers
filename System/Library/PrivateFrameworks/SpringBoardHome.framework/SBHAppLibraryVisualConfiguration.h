/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _searchContinuousCornerRadius;
	UIEdgeInsets _appSearchTextFieldLayoutInsets;

}

@property (assign,nonatomic) double searchContinuousCornerRadius;                      //@synthesize searchContinuousCornerRadius=_searchContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets appSearchTextFieldLayoutInsets;              //@synthesize appSearchTextFieldLayoutInsets=_appSearchTextFieldLayoutInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)appSearchTextFieldLayoutInsets;
-(double)searchContinuousCornerRadius;
-(void)setAppSearchTextFieldLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setSearchContinuousCornerRadius:(double)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
