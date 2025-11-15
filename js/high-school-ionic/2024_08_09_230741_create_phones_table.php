<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

return new class extends Migration
{
    /**
     * Run the migrations.
     */
    public function up(): void
    {
        Schema::create('phones', function (Blueprint $table) {
            $table->id();
            $table->string('number');
            
            /*$table->unsignedBigInteger('user_id');   // Unsigned for not allow negative numbers
            $table->foreign('user_id')
                ->references('id')
                ->on('users')
                ->onDelete('cascade')  // For auto delete register if the foreign key is deleted, if we want conserve the register change the value from 'cascade' to 'set null' and add ->nullable to user_id.
                ->onUpdate('cascade');  // For auto change value if foreign value change.*/
            $table->foreignId('user_id')
                ->constrained()
                ->onDelete('cascade')
                ->onUpdate('cascade');
            
            $table->timestamps();
        });
    }

    /**
     * Reverse the migrations.
     */
    public function down(): void
    {
        Schema::dropIfExists('phones');
    }
};
