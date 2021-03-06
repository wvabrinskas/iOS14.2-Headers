/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NKLibrary, NSString, NSDate, NSMutableArray, NSMapTable, NSMutableSet, NSArray, NSURL;

@interface NKIssue : NSObject <NSSecureCoding> {

	NKLibrary* _library;
	NSString* _name;
	NSDate* _date;
	NSString* _directory;
	NSMutableArray* _assets;
	NSMapTable* _assetsByRequest;
	NSMutableSet* _resolvedAssets;
	BOOL _foundContent;
	BOOL _isDecodingValid;

}

@property (copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (copy) NSString * directory;                                              //@synthesize directory=_directory - In the implementation block
@property (assign,setter=_setLibrary:,nonatomic) NKLibrary * _library; 
@property (copy,readonly) NSArray * downloadingAssets; 
@property (copy,readonly) NSURL * contentURL; 
@property (readonly) long long status; 
+(BOOL)supportsSecureCoding;
-(void)setDate:(NSDate *)arg1 ;
-(id)init;
-(long long)status;
-(void)encodeWithCoder:(id)arg1 ;
-(NKLibrary *)_library;
-(NSString *)directory;
-(NSDate *)date;
-(NSURL *)contentURL;
-(NSString *)name;
-(void)setDirectory:(NSString *)arg1 ;
-(id)description;
-(NSArray *)downloadingAssets;
-(id)_directory;
-(id)initWithCoder:(id)arg1 ;
-(id)_commonInit;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3 ;
-(BOOL)_isDecodingValid;
-(void)_setLibrary:(id)arg1 ;
-(id)addAssetWithRequest:(id)arg1 ;
-(id)_assetsForRequest:(id)arg1 ;
-(void)_markAssetAsResolved:(id)arg1 ;
-(void)_cleanupAsset:(id)arg1 ;
-(void)_assetChanged:(id)arg1 ;
@end

