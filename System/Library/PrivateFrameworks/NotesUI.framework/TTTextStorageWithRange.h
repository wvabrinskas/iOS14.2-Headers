/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, ICNote, NSManagedObjectContext, TTTextStorage, NSString;

@interface TTTextStorageWithRange : NSObject <NSItemProviderWriting> {

	ICNote* _note;
	NSManagedObjectContext* _workerContext;
	ICNote* _workerContextNote;
	TTTextStorage* _textStorage;
	NSRange _range;

}

@property (nonatomic,retain) ICNote * note;                                                        //@synthesize note=_note - In the implementation block
@property (assign,nonatomic) NSRange range;                                                        //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * workerContext;                               //@synthesize workerContext=_workerContext - In the implementation block
@property (nonatomic,retain) ICNote * workerContextNote;                                           //@synthesize workerContextNote=_workerContextNote - In the implementation block
@property (nonatomic,retain) TTTextStorage * textStorage;                                          //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
-(NSRange)range;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setNote:(ICNote *)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(void)setTextStorage:(TTTextStorage *)arg1 ;
-(ICNote *)note;
-(TTTextStorage *)textStorage;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)workerContext;
-(void)setWorkerContextNote:(ICNote *)arg1 ;
-(ICNote *)workerContextNote;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 note:(id)arg3 ;
-(void)prepareTextStorage;
@end
