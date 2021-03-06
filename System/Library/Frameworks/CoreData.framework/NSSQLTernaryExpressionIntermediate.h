/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSSQLEntity, NSArray;

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(id)disambiguationKeypath;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)disambiguationKeypathHasToMany;
-(id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(id)disambiguatingEntity;
@end

