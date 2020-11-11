/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICDataPersister.h>

@class NSURL;

@interface ICNoteFileDataPersister : NSObject <ICDataPersister> {

	NSURL* _baseURL;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)init;
-(BOOL)saveData:(id)arg1 identifier:(id)arg2 ;
-(id)urlForIdentifier:(id)arg1 ;
-(id)loadDataForIdentifier:(id)arg1 ;
-(id)initWithNotePackageURL:(id)arg1 ;
@end
